void Sequences(){

StartServoSeq6Part1Mapped= monServo3.readPosition();
StartServoSeq6Part1 =  mapf(StartServoSeq6Part1Mapped,0,1,0,180);
EndServoSeq6Part1Mapped = mapf(180,0,180,0,1);
if (EndServoSeq6Part1Mapped > StartServoSeq6Part1Mapped){
DistanceServoSeq6Part1 = ( EndServoSeq6Part1Mapped - StartServoSeq6Part1Mapped );}
else {DistanceServoSeq6Part1 = (StartServoSeq6Part1Mapped- EndServoSeq6Part1Mapped );}
SpeedSeq6Part1 = (DistanceServoSeq6Part1*10)/3;


StartServoSeq60Part1Mapped= monServo3.readPosition();
StartServoSeq60Part1 =  mapf(StartServoSeq60Part1Mapped,0,1,0,180);
EndServoSeq60Part1Mapped = mapf(90,0,180,0,1);
if (EndServoSeq60Part1Mapped > StartServoSeq60Part1Mapped){
DistanceServoSeq60Part1 = ( EndServoSeq60Part1Mapped - StartServoSeq60Part1Mapped );}
else {DistanceServoSeq60Part1 = (StartServoSeq60Part1Mapped- EndServoSeq60Part1Mapped );}
SpeedSeq60Part1 = (DistanceServoSeq60Part1*10)/3;

StartServoSeq7Part1Mapped= monServo1.readPosition();
StartServoSeq7Part1 =  mapf(StartServoSeq7Part1Mapped,0,1,0,180);
EndServoSeq7Part1Mapped = mapf(180,0,180,0,1);
if (EndServoSeq7Part1Mapped > StartServoSeq7Part1Mapped){
DistanceServoSeq7Part1 = ( EndServoSeq7Part1Mapped - StartServoSeq7Part1Mapped );}
else {DistanceServoSeq7Part1 = (StartServoSeq7Part1Mapped- EndServoSeq7Part1Mapped );}
SpeedSeq7Part1 = (DistanceServoSeq7Part1*10)/3;

StartServoSeq7Part2Mapped= monServo2.readPosition();
StartServoSeq7Part2 =  mapf(StartServoSeq7Part2Mapped,0,1,0,180);

EndServoSeq7Part2Mapped = mapf(180,0,180,0,1);
if (EndServoSeq7Part2Mapped > StartServoSeq7Part2Mapped){
DistanceServoSeq7Part2 = ( EndServoSeq7Part2Mapped - StartServoSeq7Part2Mapped );}
else DistanceServoSeq7Part2 = (StartServoSeq7Part2Mapped- EndServoSeq7Part2Mapped );
SpeedSeq7Part2 = (DistanceServoSeq7Part2*10)/3;


StartServoSeq70Part1Mapped= monServo2.readPosition();
StartServoSeq70Part1 =  mapf(StartServoSeq70Part1Mapped,0,1,0,180);
EndServoSeq70Part1Mapped = mapf(90,0,180,0,1);
if (EndServoSeq70Part1Mapped > StartServoSeq70Part1Mapped){
DistanceServoSeq70Part1 = ( EndServoSeq70Part1Mapped - StartServoSeq70Part1Mapped );}
else {DistanceServoSeq70Part1 = (StartServoSeq70Part1Mapped- EndServoSeq70Part1Mapped );}
SpeedSeq70Part1 = (DistanceServoSeq70Part1*10)/3;

StartServoSeq70Part2Mapped= monServo1.readPosition();
StartServoSeq70Part2 =  mapf(StartServoSeq70Part2Mapped,0,1,0,180);

EndServoSeq70Part2Mapped = mapf(90,0,180,0,1);
if (EndServoSeq70Part2Mapped > StartServoSeq70Part2Mapped){
DistanceServoSeq70Part2 = ( EndServoSeq70Part2Mapped - StartServoSeq70Part2Mapped );}
else DistanceServoSeq70Part2 = (StartServoSeq70Part2Mapped- EndServoSeq70Part2Mapped );
SpeedSeq70Part2 = (DistanceServoSeq70Part2*10)/3;


if (!Setupsequence){

Sequence7Servo.at(1000,Sequence7Part1);
Sequence7Servo.at(5000,Sequence7Part2);
Sequence7SoundPart1.at(10000,Seq7SoundPart1On);
Sequence7SoundPart1.at(15000,Seq7SoundPart1Off);
Sequence7BServo.at(1000,Sequence7BPart1);
Sequence7BServo.at(5000,Sequence7BPart2);
Sequence6Servo.at(1000,Sequence6Part1);
Sequence6SoundPart1.at(5000,Seq6SoundPart1On);
Sequence6SoundPart1.at(10000,Seq6SoundPart1Off);
Sequence6BServo.at(1000,Sequence6BPart1);
Setupsequence= true;
}
if(Action7.momentaryPos() == 1)
{
Sequence7Servo.start(1);
Sequence7SoundPart1.start(1);
}
if(Action7.Pos() == 1)
{
NeutralCtl= true;
}
if((Action7.NeutralPos() == 2) && NeutralCtl)
{
Sequence7BServo.start(1);
}
if(Action6.momentaryPos() == 3)
{
Sequence6Servo.start(1);
Sequence6SoundPart1.start(1);
}
if(Action6.Pos() == 3)
{
NeutralCtl= true;
}
if((Action6.NeutralPos() == 2) && NeutralCtl)
{
Sequence6BServo.start(1);
}
if(Action7.Pos() == 2 )
{
NeutralCtl= false;
}
if(Action6.Pos() == 2 )
{
NeutralCtl= false;
}
}
void Sequence6Part1 () {
monServo3.setSpeed(SpeedSeq6Part1);
if (monServo3.isStopped()) {monServo3.goTo(EndServoSeq6Part1Mapped);}
}
void Seq6SoundPart1On () {
Seq6SoundPart1OnOff=true;
}
void Seq6SoundPart1Off () {
Seq6SoundPart1OnOff=false;
}
void Sequence6BPart1 () {
monServo3.setSpeed(SpeedSeq60Part1);
if (monServo3.isStopped()) {monServo3.goTo(EndServoSeq60Part1Mapped);}
}
void Sequence7Part1 () {
monServo1.setSpeed(SpeedSeq7Part1);
if (monServo1.isStopped()) {monServo1.goTo(EndServoSeq7Part1Mapped);}
}
void Sequence7Part2 () {
monServo2.setSpeed(SpeedSeq7Part2);
if (monServo2.isStopped()) {monServo2.goTo(EndServoSeq7Part2Mapped);}
}
void Seq7SoundPart1On () {
Seq7SoundPart1OnOff=true;
}
void Seq7SoundPart1Off () {
Seq7SoundPart1OnOff=false;
}
void Sequence7BPart1 () {
monServo2.setSpeed(SpeedSeq70Part1);
if (monServo2.isStopped()) {monServo2.goTo(EndServoSeq70Part1Mapped);}
}
void Sequence7BPart2 () {
monServo1.setSpeed(SpeedSeq70Part2);
if (monServo1.isStopped()) {monServo1.goTo(EndServoSeq70Part2Mapped);}
}

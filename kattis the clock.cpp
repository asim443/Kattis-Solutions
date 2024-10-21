/*#include<iostream>
using namespace std;
int main()
{
	const int angle=360;
	int n;
	cin>>n;
	int q=n/10;
	float r=n%10;
	r=r*0.1;
	//q*=10;
	float ans=q+r;
	//cout<<ans;
	float angleans=angle-ans;
	cout<<angleans;
}*/
/*#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793; // Constant for pi

int main() {
    double angle;

    cout << "Enter an angle in degrees (0-360): ";
    cin >> angle;

    // Ensure angle is within 0 and 360 degrees
    angle = fmod(angle, 360); // Use fmod for modulo operation

    // Calculate hour hand angle (moves 360 degrees in 12 hours)
    double hourAngle = (angle / 360.0) * 360.0; // Normalize to 0-360

    // Calculate minute hand angle (moves 360 degrees in 60 minutes)
    double minuteAngle = (angle / 12.0) * 360.0; // Normalize to 0-360

    // Convert angles to integer degrees for readability (optional)
    int hourDegrees = static_cast<int>(round(hourAngle));
    int minuteDegrees = static_cast<int>(round(minuteAngle));

    cout << "At this angle, the hour hand would be approximately at "
         << hourDegrees << " degrees." << endl;
    cout << "At this angle, the minute hand would be approximately at "
         << minuteDegrees << " degrees." << endl;

    return 0;
}*/
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    double angle;

    // Input angle from the user
    cout << "Enter the angle (in degrees): ";
    cin >> angle;

    // Ensure the angle is within the range [0, 360)
    angle = fmod(angle, 360.0);
    if (angle < 0)
        angle += 360.0;

    // Calculate the time corresponding to the angle
    double hourAngle = angle / 30.0; // 360 degrees / 12 hours
    double minuteAngle = angle / 6.0; // 360 degrees / 60 minutes

    int hour = static_cast<int>(hourAngle);
    int minute = static_cast<int>((hourAngle - hour) * 60);

    // Output the time
    cout << "The time corresponding to " << angle << " degrees is approximately: ";
    cout << hour << " hours " << minute << " minutes." << endl;

    return 0;
}


/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>

@class MNNavigationCoordinator, NSString;

@interface MNCallReminderAlert : UIAlertView {

	MNNavigationCoordinator* _navigationCoordinator;
	NSString* _userId;

}
-(id)initWithUserName:(id)arg1 withUserId:(id)arg2 withNavigationCoordinator:(id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

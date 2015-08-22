/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterUsersStream.h>

@class TFNTwitterUser;

@interface TFNTwitterVerifiedFollowersStream : TFNTwitterUsersStream {

	TFNTwitterUser* _user;

}

@property (nonatomic,retain) TFNTwitterUser * user;              //@synthesize user=_user - In the implementation block
-(BOOL)_shouldAddReceivedUser:(id)arg1 ;
-(void)_didReceiveResponseObject:(id)arg1 top:(BOOL)arg2 ;
-(void)_loadTopWithRequest:(id)arg1 ;
-(void)_loadBottomWithRequest:(id)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
@end

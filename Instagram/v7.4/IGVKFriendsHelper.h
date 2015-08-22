/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGFindFriendsHelperProtocol.h>

@protocol IGFindFriendsHelperDelegate;
@class UIViewController, NSString;

@interface IGVKFriendsHelper : NSObject <IGFindFriendsHelperProtocol> {

	UIViewController*<IGFindFriendsHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UIViewController*<IGFindFriendsHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authorizeAndFetchUsers;
-(void)onVkontakteAuthSuccessDismissOAuth:(BOOL)arg1 ;
-(void)onVkontakteAuthSuccess;
-(void)onVkontakteAuthFailure;
-(void)dealloc;
-(void)setDelegate:(UIViewController*<IGFindFriendsHelperDelegate>)arg1 ;
-(UIViewController*<IGFindFriendsHelperDelegate>)delegate;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInlineComposerLifecycleListener.h>
#import <Facebook/FBInlineComposerPromoBarHandler.h>

@class FBUserSession, FBCloseFriendsPromoBarListenerAnnouncer, NSString;

@interface FBCloseFriendsPromoBarController : NSObject <FBInlineComposerLifecycleListener, FBInlineComposerPromoBarHandler> {

	FBUserSession* _session;
	FBCloseFriendsPromoBarListenerAnnouncer* _announcer;

}

@property (nonatomic,readonly) FBCloseFriendsPromoBarListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowCloseFriendsPromoBarWithSession:(id)arg1 ;
-(FBCloseFriendsPromoBarListenerAnnouncer *)announcer;
-(void)_dismissPromoBar;
-(void)composerDidPost:(id)arg1 ;
-(void)didTapPromoBar;
-(id)initWithSession:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventLiveGuestlistTabViewController.h>

@interface FBEventMaybeGuestlistTabViewController : FBEventLiveGuestlistTabViewController {

	long long _guestlistType;

}
-(long long)_getGuestCountToDisplayForEvent:(id)arg1 ;
-(void)setCurrentTotalGuestCount:(long long)arg1 ;
-(void)updateCachedEvent:(id)arg1 shouldShowCanInviteNullState:(BOOL)arg2 ;
-(id)initWithEvent:(id)arg1 viewer:(id)arg2 session:(id)arg3 tracker:(id)arg4 delegate:(id)arg5 ;
-(long long)guestlistType;
-(id)transientViewStateTitle;
-(BOOL)dataSource:(id)arg1 shouldPrependCurrentUserForSectionType:(long long)arg2 ;
-(void)dataSourceShouldResetPendingGuest:(id)arg1 ;
-(id)fetchPendingGuestRsvps;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

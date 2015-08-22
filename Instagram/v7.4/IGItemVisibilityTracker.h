/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGItemVisibilityTrackerDelegate;
@class NSSet, NSMutableSet;

@interface IGItemVisibilityTracker : NSObject {

	NSSet* _lastVisibleItems;
	NSMutableSet* _viewedItems;
	BOOL _trackingDisabled;
	id<IGItemVisibilityTrackerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL trackingDisabled;                                            //@synthesize trackingDisabled=_trackingDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGItemVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTrackingDisabled:(BOOL)arg1 ;
-(void)updateItemVisibilitiesWithSet:(id)arg1 ;
-(void)updateItemViewedWithItem:(id)arg1 ;
-(BOOL)trackingDisabled;
-(void)setDelegate:(id<IGItemVisibilityTrackerDelegate>)arg1 ;
-(id)init;
-(id<IGItemVisibilityTrackerDelegate>)delegate;
@end

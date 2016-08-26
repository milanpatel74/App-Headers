/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWorkingRangeSnapshot, FBSampledWorkingRangeControllerDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSString;

@interface FBSampledWorkingRangeController : NSObject {

	id<FBWorkingRangeSnapshot> _previousSnapshot;
	NSMutableDictionary* _itemViewStateTransitions;
	/*function pointer*/void* _transitionFunction;
	NSString* _identifier;
	id<FBSampledWorkingRangeControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<FBSampledWorkingRangeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTransitionFunction:(/*function pointer*/void*)arg1 identifier:(id)arg2 ;
-(void)sampleSnapshot:(id)arg1 ;
-(void)_processUntrackedItemViewStates:(id)arg1 visibleBounds:(CGRect)arg2 timestamp:(double)arg3 snapshot:(id)arg4 ;
-(void)setDelegate:(id<FBSampledWorkingRangeControllerDelegate>)arg1 ;
-(id<FBSampledWorkingRangeControllerDelegate>)delegate;
-(NSString *)identifier;
@end

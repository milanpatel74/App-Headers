/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedSampledImpressionControllerDelegate;
#import <Facebook/Facebook-Structs.h>
@class FBFeedImpressionSnapshot;

@interface FBFeedSampledImpressionController : NSObject {

	FBFeedImpressionSnapshot* _previousSnapshot;
	unique_ptr<std::__1::unordered_map<FBFeedImpressionEdgeViewState *, std::__1::shared_ptr<std::__1::vector<FBFeedSampledImpressionControllerEdgeTransition, std::__1::allocator<FBFeedSampledImpressionControllerEdgeTransition> > >, EdgeStateHash, EdgeStateEqual, std::__1::allocator<std::__1::pair<FBFeedImpressionEdgeViewState *const, std::__1::shared_ptr<std::__1::vector<FBFeedSampledImpressionControllerEdgeTransition, std::__1::allocator<FBFeedSampledImpressionControllerEdgeTransition> > > > > >, std::__1::default_delete<std::__1::unordered_map<FBFeedImpressionEdgeViewState *, std::__1::shared_ptr<std::__1::vector<FBFeedSampledImpressionControllerEdgeTransition, std::__1::allocator<FBFeedSampledImpressionControllerEdgeTransition> > >, EdgeStateHash, EdgeStateEqual, std::__1::allocator<std::__1::pair<FBFeedImpressionEdgeViewState *const, std::__1::shared_ptr<std::__1::vector<FBFeedSampledImpressionControllerEdgeTransition, std::__1::allocator<FBFeedSampledImpressionControllerEdgeTransition> > > > > > > >* _edgeStateTransitions;
	BOOL _maxHeightTrackingEnabled;
	id<FBFeedSampledImpressionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFeedSampledImpressionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMaxHeightTrackingEnabled:(BOOL)arg1 ;
-(void)reset:(id)arg1 ;
-(void)sampleImpressionSnapshot:(id)arg1 ;
-(void)_edgesDisappeared:(id)arg1 timestamp:(id)arg2 ;
-(void)setDelegate:(id<FBFeedSampledImpressionControllerDelegate>)arg1 ;
-(id<FBFeedSampledImpressionControllerDelegate>)delegate;
@end

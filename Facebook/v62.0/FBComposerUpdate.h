/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerUpdateAnalyticsEvent, FBComposerCompositionStateMutationUpdate, FBComposerUpdateAction, FBComposerDestinationUpdate, FBComposerPerformanceUpdate, FBComposerFunnelEventUpdate;

@interface FBComposerUpdate : FBValueObject <NSCopying> {

	FBComposerUpdateAnalyticsEvent* _analyticsEvent;
	FBComposerCompositionStateMutationUpdate* _mutationUpdate;
	FBComposerUpdateAction* _updateAction;
	FBComposerDestinationUpdate* _destinationUpdate;
	FBComposerPerformanceUpdate* _performanceUpdate;
	FBComposerFunnelEventUpdate* _funnelEventUpdate;

}

@property (nonatomic,copy,readonly) FBComposerUpdateAnalyticsEvent * analyticsEvent;                        //@synthesize analyticsEvent=_analyticsEvent - In the implementation block
@property (nonatomic,copy,readonly) FBComposerCompositionStateMutationUpdate * mutationUpdate;              //@synthesize mutationUpdate=_mutationUpdate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerUpdateAction * updateAction;                                  //@synthesize updateAction=_updateAction - In the implementation block
@property (nonatomic,copy,readonly) FBComposerDestinationUpdate * destinationUpdate;                        //@synthesize destinationUpdate=_destinationUpdate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPerformanceUpdate * performanceUpdate;                        //@synthesize performanceUpdate=_performanceUpdate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerFunnelEventUpdate * funnelEventUpdate;                        //@synthesize funnelEventUpdate=_funnelEventUpdate - In the implementation block
-(FBComposerUpdateAnalyticsEvent *)analyticsEvent;
-(id)initWithAnalyticsEvent:(id)arg1 mutationUpdate:(id)arg2 updateAction:(id)arg3 destinationUpdate:(id)arg4 performanceUpdate:(id)arg5 funnelEventUpdate:(id)arg6 ;
-(FBComposerCompositionStateMutationUpdate *)mutationUpdate;
-(FBComposerDestinationUpdate *)destinationUpdate;
-(FBComposerPerformanceUpdate *)performanceUpdate;
-(FBComposerFunnelEventUpdate *)funnelEventUpdate;
-(FBComposerUpdateAction *)updateAction;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTimer;

@interface T1QuotedStatusParameters : NSObject {

	TFNTimer* _updateTimer;

}
+(id)sharedParameters;
+(double)_lineHeightBasicUnitForLayoutMetrics:(id)arg1 ;
-(double)boxCornerRadius;
-(void)_coalesceUpdates;
-(void)_performUpdate;
-(double)inlineActionTopMarginWithLayoutMetrics:(id)arg1 ;
-(double)authorBodyMarginWithLayoutMetrics:(id)arg1 ;
-(double)mediaTextMarginWithLayoutMetrics:(id)arg1 ;
-(double)mediaCornerRadius;
-(UIEdgeInsets)contentEdgeInsetsWithLayoutMetrics:(id)arg1 ;
-(UIEdgeInsets)contentCompactEdgeInsetsWithLayoutMetrics:(id)arg1 ;
-(double)mediaMaxWidthWithLayoutMetrics:(id)arg1 ;
-(CGSize)mediaPreviewCompactSizeWithLayoutMetrics:(id)arg1 ;
-(void)tfx_inlineActionTopMarginParameterChanged;
-(void)tfx_authorBodyMarginParameterChanged;
-(void)tfx_mediaTextMarginParameterChanged;
-(void)tfx_boxCornerRadiusParameterChanged;
-(void)tfx_mediaCornerRadiusParameterChanged;
-(void)tfx_contentEdgeInsetsValueParameterChanged;
-(void)tfx_mediaMaxWidthParameterChanged;
-(id)init;
@end

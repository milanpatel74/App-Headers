/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPerformanceGraphMetricProvider;
@class NSObject;

@interface FBPerformanceMonitorGraphView : UIView {

	NSObject*<FBPerformanceGraphMetricProvider> _metric;

}

@property (assign,nonatomic) NSObject*<FBPerformanceGraphMetricProvider> metric;              //@synthesize metric=_metric - In the implementation block
-(void)drawValues:(id)arg1 yMin:(double)arg2 yMax:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSObject*<FBPerformanceGraphMetricProvider>)metric;
-(void)setMetric:(NSObject*<FBPerformanceGraphMetricProvider>)arg1 ;
@end

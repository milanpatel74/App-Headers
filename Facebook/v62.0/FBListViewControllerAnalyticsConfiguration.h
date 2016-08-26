/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBListViewControllerAnalyticsConfiguring.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBListViewControllerImpressionLoggingConfiguration;

@interface FBListViewControllerAnalyticsConfiguration : NSObject <FBListViewControllerAnalyticsConfiguring, NSCopying> {

	/*^block*/id _analyticsExtraBlock;
	NSString* _appearanceEvent;
	NSString* _disappearanceEvent;
	FBListViewControllerImpressionLoggingConfiguration* _impressionLoggingConfiguration;
	NSString* _analyticsModule;

}

@property (nonatomic,copy) NSString * analyticsModule;                                                                         //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id analyticsExtraBlock;                                                                             //@synthesize analyticsExtraBlock=_analyticsExtraBlock - In the implementation block
@property (nonatomic,copy) NSString * appearanceEvent;                                                                         //@synthesize appearanceEvent=_appearanceEvent - In the implementation block
@property (nonatomic,copy) NSString * disappearanceEvent;                                                                      //@synthesize disappearanceEvent=_disappearanceEvent - In the implementation block
@property (nonatomic,retain) FBListViewControllerImpressionLoggingConfiguration * impressionLoggingConfiguration;              //@synthesize impressionLoggingConfiguration=_impressionLoggingConfiguration - In the implementation block
+(id)newWithAnalyticsModule:(id)arg1 ;
+(id)newWithAnalyticsModule:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)setAnalyticsExtraBlock:(id)arg1 ;
-(void)setImpressionLoggingConfiguration:(FBListViewControllerImpressionLoggingConfiguration *)arg1 ;
-(NSString *)appearanceEvent;
-(NSString *)disappearanceEvent;
-(FBListViewControllerImpressionLoggingConfiguration *)impressionLoggingConfiguration;
-(id)analyticsExtraBlock;
-(void)setAppearanceEvent:(NSString *)arg1 ;
-(void)setDisappearanceEvent:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

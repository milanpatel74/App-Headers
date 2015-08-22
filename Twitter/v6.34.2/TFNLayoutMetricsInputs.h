/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>
#import <Twitter/NSMutableCopying.h>

@class TFNTraitCollection, UIFont, NSValue, NSNumber;

@interface TFNLayoutMetricsInputs : NSObject <NSCopying, NSMutableCopying> {

	double _canvasWidth;
	double _simulateCanvasWidth;
	TFNTraitCollection* _traitCollection;
	UIFont* _contentFont;
	NSValue* _customDisplayAreaEdgeInsets;
	NSValue* _customContentEdgeInsets;
	NSNumber* _customLeadingControlAreaWidth;
	NSNumber* _customTrailingControlAreaWidth;
	NSValue* _customAvatarSize;
	long long _parametersVersion;

}

@property (nonatomic,readonly) double canvasWidth;                                     //@synthesize canvasWidth=_canvasWidth - In the implementation block
@property (nonatomic,readonly) double simulateCanvasWidth;                             //@synthesize simulateCanvasWidth=_simulateCanvasWidth - In the implementation block
@property (nonatomic,readonly) double computationCanvasWidth; 
@property (nonatomic,readonly) TFNTraitCollection * traitCollection;                   //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIFont * contentFont;                                   //@synthesize contentFont=_contentFont - In the implementation block
@property (nonatomic,readonly) NSValue * customDisplayAreaEdgeInsets;                  //@synthesize customDisplayAreaEdgeInsets=_customDisplayAreaEdgeInsets - In the implementation block
@property (nonatomic,readonly) NSValue * customContentEdgeInsets;                      //@synthesize customContentEdgeInsets=_customContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) NSNumber * customLeadingControlAreaWidth;               //@synthesize customLeadingControlAreaWidth=_customLeadingControlAreaWidth - In the implementation block
@property (nonatomic,readonly) NSNumber * customTrailingControlAreaWidth;              //@synthesize customTrailingControlAreaWidth=_customTrailingControlAreaWidth - In the implementation block
@property (nonatomic,readonly) NSValue * customAvatarSize;                             //@synthesize customAvatarSize=_customAvatarSize - In the implementation block
@property (nonatomic,readonly) long long parametersVersion;                            //@synthesize parametersVersion=_parametersVersion - In the implementation block
-(UIFont *)contentFont;
-(double)canvasWidth;
-(BOOL)isEqualToLayoutMetricsInputs:(id)arg1 ;
-(NSValue *)customDisplayAreaEdgeInsets;
-(NSValue *)customContentEdgeInsets;
-(NSNumber *)customLeadingControlAreaWidth;
-(NSNumber *)customTrailingControlAreaWidth;
-(NSValue *)customAvatarSize;
-(long long)parametersVersion;
-(id)_copyWithZone:(NSZone*)arg1 usingClass:(Class)arg2 ;
-(double)simulateCanvasWidth;
-(double)computationCanvasWidth;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TFNTraitCollection *)traitCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpired;
@end

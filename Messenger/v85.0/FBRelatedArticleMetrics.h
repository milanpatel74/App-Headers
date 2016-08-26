/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide;

@interface FBRelatedArticleMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;
	double _attributionToHeadlineSpacing;
	CGSize _coverImageSize;
	CGSize _coverImageResolution;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _textInsets;
	FBTextMetrics* _sponsoredTextMetrics;
	FBTextMetrics* _kickerTextMetrics;
	FBTextMetrics* _headlineTextMetrics;

}

@property (nonatomic,readonly) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) double attributionToHeadlineSpacing;              //@synthesize attributionToHeadlineSpacing=_attributionToHeadlineSpacing - In the implementation block
@property (nonatomic,readonly) CGSize coverImageSize;                            //@synthesize coverImageSize=_coverImageSize - In the implementation block
@property (nonatomic,readonly) CGSize coverImageResolution;                      //@synthesize coverImageResolution=_coverImageResolution - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets textInsets;                          //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* sponsoredTextMetrics;              //@synthesize sponsoredTextMetrics=_sponsoredTextMetrics - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* kickerTextMetrics;                 //@synthesize kickerTextMetrics=_kickerTextMetrics - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* headlineTextMetrics;               //@synthesize headlineTextMetrics=_headlineTextMetrics - In the implementation block
-(CGSize)coverImageResolution;
-(FBTextMetrics*)sponsoredTextMetrics;
-(FBTextMetrics*)kickerTextMetrics;
-(CGSize)coverImageSize;
-(FBTextMetrics*)headlineTextMetrics;
-(double)attributionToHeadlineSpacing;
-(id)initWithInterfaceGuide:(id)arg1 ;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(UIEdgeInsets)textInsets;
@end

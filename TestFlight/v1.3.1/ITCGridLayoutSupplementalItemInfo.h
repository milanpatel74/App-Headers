/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <TestFlight/TestFlight-Structs.h>
@class UIColor;

@interface ITCGridLayoutSupplementalItemInfo : NSObject {

	BOOL _header;
	BOOL _shouldPin;
	BOOL _visibleWhileShowingPlaceholder;
	BOOL _isPlaceholder;
	BOOL _hidden;
	BOOL _hasEstimatedHeight;
	double _height;
	UIColor* _backgroundColor;
	UIColor* _selectedBackgroundColor;
	CGRect _frame;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) CGRect frame;                                     //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL header;                                      //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) double height;                                    //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL shouldPin;                                   //@synthesize shouldPin=_shouldPin - In the implementation block
@property (assign,nonatomic) BOOL visibleWhileShowingPlaceholder;              //@synthesize visibleWhileShowingPlaceholder=_visibleWhileShowingPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                               //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;                //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                             //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedHeight;                          //@synthesize hasEstimatedHeight=_hasEstimatedHeight - In the implementation block
-(UIColor *)selectedBackgroundColor;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(void)setHasEstimatedHeight:(BOOL)arg1 ;
-(BOOL)hasEstimatedHeight;
-(BOOL)visibleWhileShowingPlaceholder;
-(void)setVisibleWhileShowingPlaceholder:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(void)setShouldPin:(BOOL)arg1 ;
-(BOOL)shouldPin;
-(BOOL)hidden;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setHeader:(BOOL)arg1 ;
-(BOOL)header;
-(BOOL)isPlaceholder;
@end

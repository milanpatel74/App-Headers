/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface GADMRAIDResizeProperties : NSObject {

	BOOL _allowOffscreen;
	long long _customClosePosition;
	CGSize _size;
	CGVector _offset;

}

@property (assign,nonatomic) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGVector offset;                            //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long customClosePosition;              //@synthesize customClosePosition=_customClosePosition - In the implementation block
@property (assign,nonatomic) BOOL allowOffscreen;                        //@synthesize allowOffscreen=_allowOffscreen - In the implementation block
+(unsigned long long)autoresizingMaskForClosePosition:(long long)arg1 ;
+(CGRect)closeButtonRectForPosition:(long long)arg1 contentFrame:(CGRect)arg2 ;
+(BOOL)isContentFrameValid:(CGRect)arg1 forBounds:(CGRect)arg2 allowOffscreen:(BOOL)arg3 closeButtonPosition:(long long)arg4 ;
+(id)MRAIDResizePropertiesWithDictionary:(id)arg1 ;
-(void)setCustomClosePosition:(long long)arg1 ;
-(void)setAllowOffscreen:(BOOL)arg1 ;
-(long long)customClosePosition;
-(BOOL)allowOffscreen;
-(CGSize)size;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setOffset:(CGVector)arg1 ;
-(CGVector)offset;
@end

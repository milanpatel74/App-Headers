/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECThemedButtonAccentPrimaryBase2TextHintLightBackground.h>

@interface ECWatchlistButton : ECThemedButtonAccentPrimaryBase2TextHintLightBackground {

	BOOL _inWatchlist;
	/*^block*/id _tapHandler;

}

@property (assign,nonatomic) BOOL inWatchlist;              //@synthesize inWatchlist=_inWatchlist - In the implementation block
@property (nonatomic,copy) id tapHandler;                   //@synthesize tapHandler=_tapHandler - In the implementation block
-(BOOL)inWatchlist;
-(void)setInWatchlist:(BOOL)arg1 ;
-(void)updateIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(void)handleTap;
-(void)setTapHandler:(id)arg1 ;
-(id)tapHandler;
@end

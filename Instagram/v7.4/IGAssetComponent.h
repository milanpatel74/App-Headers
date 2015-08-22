/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:19 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class UIBezierPath, IGPathStyleSet;

@interface IGAssetComponent : NSObject {

	UIBezierPath* _path;
	IGPathStyleSet* _style;
	CGPoint _position;

}

@property (nonatomic,retain) UIBezierPath * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) IGPathStyleSet * style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGPoint position;                    //@synthesize position=_position - In the implementation block
-(UIBezierPath *)path;
-(IGPathStyleSet *)style;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setStyle:(IGPathStyleSet *)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
@end

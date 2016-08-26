/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@class CALayer, CAShapeLayer, NSArray;

@interface FBSpeakerNode : ASDisplayNode {

	double _strikethroughState;
	double _soundWavesState;
	CALayer* _speakerSoundWavesLayer;
	CAShapeLayer* _speakerNegativeStrikethroughMaskShapeLayer;
	CAShapeLayer* _strikethroughShapeLayer;
	CAShapeLayer* _speakerShapeLayer;
	CALayer* _soundWavesLayer;
	NSArray* _soundWaveshapeLayers;
	CAShapeLayer* _soundWavesMaskShapeLayer;
	unsigned long long _soundWaves;

}
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setStrikethrough:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSoundWaves:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_layoutSpeakerStrikethrough;
-(void)_layoutSoundWaves;
-(void)_layoutsoundWaveShape:(id)arg1 withState:(double)arg2 ;
-(id)init;
-(void)layout;
-(void)didLoad;
@end

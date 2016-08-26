/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFeedToolbox;

@interface FBLightningBoltOverlayComponent : CKCompositeComponent {

	BOOL _boltVisible;
	BOOL _enableNUX;
	unsigned long long _boltPosition;
	FBFeedToolbox* _toolbox;

}

@property (assign,nonatomic) BOOL enableNUX;                               //@synthesize enableNUX=_enableNUX - In the implementation block
@property (assign,nonatomic) BOOL boltVisible;                             //@synthesize boltVisible=_boltVisible - In the implementation block
@property (assign,nonatomic) unsigned long long boltPosition;              //@synthesize boltPosition=_boltPosition - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * toolbox;                      //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithComponent:(id)arg1 additiveBoltInsets:(UIEdgeInsets)arg2 boltVisible:(BOOL)arg3 boltPosition:(unsigned long long)arg4 highContrast:(BOOL)arg5 enableNUX:(BOOL)arg6 toolbox:(id)arg7 ;
-(FBFeedToolbox *)toolbox;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(unsigned long long)boltPosition;
-(BOOL)boltVisible;
-(void)setBoltVisible:(BOOL)arg1 ;
-(void)setBoltPosition:(unsigned long long)arg1 ;
-(BOOL)enableNUX;
-(void)setEnableNUX:(BOOL)arg1 ;
@end

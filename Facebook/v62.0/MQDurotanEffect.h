/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/MQEffectBase.h>

@class SCNNode, SCNMaterial, SCNScene;

@interface MQDurotanEffect : MQEffectBase {

	SCNVector3 _vertices[357];
	SCNVector3 _normals[357];
	MQVector2 _uvs[357];
	MQVector2 _uvs2[357];
	MQVector2 _uvs3[357];
	SCNVector3 _vertices3[357];
	SCNNode* _face;
	SCNNode* _faceOccluder;
	SCNMaterial* _faceOccluderMaterial;
	SCNMaterial* _faceMaterial;
	float _backgroundAverage;
	SCNNode* _faceOffsets;
	SCNNode* _faceOffsets2;
	SCNMaterial* _faceOffsetsMaterial;
	SCNScene* _scene;
	SCNNode* _container;
	SCNNode* _light;
	SCNNode* _ambient;
	SCNNode* _toothLeft;
	SCNNode* _toothRight;
	SCNNode* _ring;
	SCNNode* _hair;
	SCNNode* _necklace;
	SCNNode* _joint;
	SCNVector3 startRotation;
	SCNVector3 startPosition;
	SCNNode* _dbPlane;
	SCNMaterial* _dbMaterial;
	SCNNode* _fgPlane;
	SCNNode* _logo;

}
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(id)customVideoMaterials;
-(void)alignForeground:(id)arg1 ;
-(void)setRenderingOrder:(id)arg1 elements:(id)arg2 order:(long long)arg3 ;
-(void)createLogo:(id)arg1 ;
-(void)createDisplaceDebugForeground:(id)arg1 ;
-(SCNVector3)middlePoint:(id)arg1 index0:(int)arg2 index1:(int)arg3 index2:(int)arg4 ;
-(SCNVector3)displacedVertex:(id)arg1 index:(int)arg2 ;
-(SCNVector3)interpolateVector:(SCNVector3)arg1 b:(SCNVector3)arg2 coeff:(float)arg3 ;
-(void)createForeground:(id)arg1 blend:(id)arg2 ;
-(void)updateGeometry:(id)arg1 ;
-(id)init;
-(MQVector2)projectPoint:(SCNVector3)arg1 ;
@end

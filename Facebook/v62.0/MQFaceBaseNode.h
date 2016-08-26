/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <SceneKit/SCNNode.h>

@class NSData;

@interface MQFaceBaseNode : SCNNode {

	BOOL _generateVideoUVs;
	SCD_Struct_MQ1436* _vertices;
	NSData* _indicesData;
	NSData* _verticesData;

}

@property (assign,nonatomic) SCD_Struct_MQ1436* vertices;              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSData * indicesData;                     //@synthesize indicesData=_indicesData - In the implementation block
@property (nonatomic,retain) NSData * verticesData;                    //@synthesize verticesData=_verticesData - In the implementation block
@property (nonatomic,readonly) long long numTriangles; 
@property (nonatomic,readonly) long long verticesCount; 
@property (assign,nonatomic) BOOL generateVideoUVs;                    //@synthesize generateVideoUVs=_generateVideoUVs - In the implementation block
-(long long)verticesCount;
-(long long)numTriangles;
-(id)initWithData:(const float*)arg1 indices:(const unsigned short*)arg2 ;
-(void)updateFaceGeometry:(id)arg1 model:(id)arg2 effect:(id)arg3 ;
-(void)uploadGeometry;
-(NSData *)indicesData;
-(void)setIndicesData:(NSData *)arg1 ;
-(NSData *)verticesData;
-(void)setVerticesData:(NSData *)arg1 ;
-(BOOL)generateVideoUVs;
-(void)setGenerateVideoUVs:(BOOL)arg1 ;
-(void)dealloc;
-(void)setVertices:(SCD_Struct_MQ1436*)arg1 ;
-(SCD_Struct_MQ1436*)vertices;
-(void)setIndices:(const unsigned short*)arg1 ;
@end

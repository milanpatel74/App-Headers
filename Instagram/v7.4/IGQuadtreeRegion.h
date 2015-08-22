/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class QuadtreePoint;

@interface IGQuadtreeRegion : NSObject {

	QuadtreePoint* _northwest;
	QuadtreePoint* _southeast;
	QuadtreePoint* _center;
	QuadtreePoint* _halfDimension;

}

@property (nonatomic,readonly) QuadtreePoint * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) QuadtreePoint * halfDimension;              //@synthesize halfDimension=_halfDimension - In the implementation block
+(SCD_Struct_IG30)regionAroundCoordinate:(CGPoint)arg1 withDistanceToBoundary:(double)arg2 ;
+(id)globalRegion;
+(SCD_Struct_IG30)regionAroundPoint:(id)arg1 withDistanceToBoundary:(double)arg2 ;
-(id)initWithMKCoordinateRegion:(SCD_Struct_IG30)arg1 ;
-(SCD_Struct_IG30)toMKCoordinateRegion;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(QuadtreePoint *)halfDimension;
-(id)expandRegion:(double)arg1 ;
-(BOOL)containsRegion:(id)arg1 ;
-(BOOL)isGlobalRegion;
-(id)initWithMKCoordinateRegion:(SCD_Struct_IG30)arg1 expansionFactor:(double)arg2 ;
-(id)init:(id)arg1 halfDimension:(id)arg2 ;
-(id)northwest;
-(id)southeast;
-(BOOL)intersectsRegion:(id)arg1 ;
-(BOOL)containsPoint:(id)arg1 ;
-(QuadtreePoint *)center;
@end

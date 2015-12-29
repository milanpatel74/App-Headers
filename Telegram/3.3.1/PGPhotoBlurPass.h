//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PGPhotoProcessPass.h"

@interface PGPhotoBlurPass : PGPhotoProcessPass
{
    int _type;
    double _size;
    double _falloff;
    double _angle;
    struct CGPoint _point;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) double falloff; // @synthesize falloff=_falloff;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface PGBlurToolValue : NSObject <NSCopying>
{
    _Bool _editingIntensity;
    int _type;
    double _size;
    double _falloff;
    double _angle;
    double _intensity;
    struct CGPoint _point;
}

@property(nonatomic) _Bool editingIntensity; // @synthesize editingIntensity=_editingIntensity;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double falloff; // @synthesize falloff=_falloff;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


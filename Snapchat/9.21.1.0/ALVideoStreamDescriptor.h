//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALVideoStreamDescriptor : NSObject
{
    _Bool _publish;
    _Bool _receive;
    _Bool _useAdaptation;
    unsigned int _maxWidth;
    unsigned int _maxHeight;
    unsigned int _maxBitRate;
    unsigned int _maxFps;
}

@property(nonatomic) _Bool useAdaptation; // @synthesize useAdaptation=_useAdaptation;
@property(nonatomic) _Bool receive; // @synthesize receive=_receive;
@property(nonatomic) _Bool publish; // @synthesize publish=_publish;
@property(nonatomic) unsigned int maxFps; // @synthesize maxFps=_maxFps;
@property(nonatomic) unsigned int maxBitRate; // @synthesize maxBitRate=_maxBitRate;
@property(nonatomic) unsigned int maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned int maxWidth; // @synthesize maxWidth=_maxWidth;
- (id)toDict;
- (void)dealloc;
- (id)init;

@end


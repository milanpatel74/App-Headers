//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSMutableArray;

@interface SKPFPSHistoryLayer : CALayer
{
    NSMutableArray *_previousLayers;
}

@property(retain) NSMutableArray *previousLayers; // @synthesize previousLayers=_previousLayers;
- (void).cxx_destruct;
- (void)pushValue:(double)arg1;

@end


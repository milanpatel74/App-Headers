//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessRequest.h"

@class NSArray, NSData, NSString;

@interface SCImageProcessPixelRequest : NSObject <SCImageProcessRequest>
{
    NSArray *_commands;
    CDUnknownBlockType _completionHandler;
    unsigned int _texture;
    unsigned int _framebuffer;
    unsigned int _colorRenderbuffer;
    unsigned long long _status;
    NSData *_data;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
}

@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)cancel;
- (void)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2;
@property(readonly, nonatomic) _Bool GPURequired;
- (void)cleanup;
- (void)setupOutputRendererWithContext:(id)arg1;
- (void)setupInputTextureWithContext:(id)arg1;
- (id)initWithData:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 commands:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TGWebSearchResult.h"

@class NSString;

@interface TGGiphySearchResultItem : NSObject <TGWebSearchResult>
{
    NSString *_gifId;
    NSString *_gifUrl;
    unsigned long long _gifFileSize;
    NSString *_previewUrl;
    struct CGSize _gifSize;
    struct CGSize _previewSize;
}

@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(readonly, nonatomic) NSString *previewUrl; // @synthesize previewUrl=_previewUrl;
@property(readonly, nonatomic) unsigned long long gifFileSize; // @synthesize gifFileSize=_gifFileSize;
@property(readonly, nonatomic) struct CGSize gifSize; // @synthesize gifSize=_gifSize;
@property(readonly, nonatomic) NSString *gifUrl; // @synthesize gifUrl=_gifUrl;
@property(readonly, nonatomic) NSString *gifId; // @synthesize gifId=_gifId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGifId:(id)arg1 gifUrl:(id)arg2 gifSize:(struct CGSize)arg3 gifFileSize:(unsigned long long)arg4 previewUrl:(id)arg5 previewSize:(struct CGSize)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

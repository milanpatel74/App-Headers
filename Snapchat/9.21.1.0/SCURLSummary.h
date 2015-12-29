//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSummary.h"

@class NSString, NSURL;

@interface SCURLSummary : SCSummary
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_urlString;
    NSURL *_imageUrlString;
    NSURL *_imageUrl;
    id <SCURLSummaryDelegate> _delegate;
}

@property(nonatomic) __weak id <SCURLSummaryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)cacheId;
- (void)_fetchThumbnailImageFromServer;
- (void)fetchThumbnailImage;
- (void)fetchData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidSummary;
- (void)updateWithURLSummary:(id)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageUrlString:(id)arg4;
- (id)initWithURLString:(id)arg1;

@end


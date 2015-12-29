//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, NSString, UIColor, UIFont;

@interface SCSponsoredSlug : NSObject <NSCoding, NSCopying>
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_dropshadowColor;
    NSString *_text;
    NSNumber *_timeBeforeFadeout;
    NSNumber *_hmargin;
    NSNumber *_vmargin;
    long long _position;
    NSString *_sponsoredText;
    NSString *_sponsoredChannelText;
    struct CGSize _dropshadowOffset;
}

@property(readonly, copy, nonatomic) NSString *sponsoredChannelText; // @synthesize sponsoredChannelText=_sponsoredChannelText;
@property(readonly, copy, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) NSNumber *vmargin; // @synthesize vmargin=_vmargin;
@property(readonly, nonatomic) NSNumber *hmargin; // @synthesize hmargin=_hmargin;
@property(readonly, nonatomic) NSNumber *timeBeforeFadeout; // @synthesize timeBeforeFadeout=_timeBeforeFadeout;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) struct CGSize dropshadowOffset; // @synthesize dropshadowOffset=_dropshadowOffset;
@property(readonly, nonatomic) UIColor *dropshadowColor; // @synthesize dropshadowColor=_dropshadowColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)parseParameters:(id)arg1;
- (void)parseStyle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)overrideWithSlug:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TGStaticBackdropAreaData;

@interface TGMessageImageAdditionalDataView : UIView
{
    TGStaticBackdropAreaData *_backdropArea;
    NSString *_text;
    struct CGSize _textSize;
    _Bool _textSizeInitialized;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)textSize;
- (id)textFont;
- (void)setText:(id)arg1;
- (void)setBackdropArea:(id)arg1 transitionDuration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


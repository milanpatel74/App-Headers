//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKPinAnnotationView.h"

@class ASHandle, TGCalloutView;

@interface TGMapAnnotationView : MKPinAnnotationView
{
    ASHandle *_watcherHandle;
    TGCalloutView *_calloutView;
}

@property(retain, nonatomic) TGCalloutView *calloutView; // @synthesize calloutView=_calloutView;
@property(retain, nonatomic) ASHandle *watcherHandle; // @synthesize watcherHandle=_watcherHandle;
- (void).cxx_destruct;
- (void)calloutPressed;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

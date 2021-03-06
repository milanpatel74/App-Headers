/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic,retain) POPAnimatableProperty * property; 
@property (nonatomic,copy) id fromValue; 
@property (nonatomic,copy) id toValue; 
@property (assign,nonatomic) double roundingFactor; 
@property (assign,nonatomic) unsigned long long clampMode; 
@property (assign,getter=isAdditive,nonatomic) BOOL additive; 
-(void)setClampMode:(unsigned long long)arg1 ;
-(void)setRoundingFactor:(double)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)progressMarkers;
-(void)setProgressMarkers:(id)arg1 ;
-(double)roundingFactor;
-(unsigned long long)clampMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(id)toValue;
-(BOOL)isAdditive;
-(void)setProperty:(POPAnimatableProperty *)arg1 ;
-(POPAnimatableProperty *)property;
-(id)currentValue;
@end


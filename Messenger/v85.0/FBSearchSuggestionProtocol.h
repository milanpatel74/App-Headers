/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSearchSuggestionProtocol <NSObject>
@property (assign,nonatomic) unsigned long long cacheType; 
@property (assign,nonatomic) BOOL isNonCacheable; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSString * semantic; 
@property (nonatomic,readonly) unsigned long long resultType; 
@property (assign,nonatomic) BOOL isSelected; 
@property (assign,nonatomic) BOOL showQueryFormationAffordance; 
@property (nonatomic,copy) NSString * suggestionServerSource; 
@optional
-(id)suggestionTypeForActivityLog;
-(void)setSuggestionServerSource:(id)arg1;
-(NSString *)suggestionServerSource;

@required
-(id)suggestionTypeForLogging;
-(BOOL)isNonCacheable;
-(void)setIsNonCacheable:(BOOL)arg1;
-(BOOL)showQueryFormationAffordance;
-(void)setShowQueryFormationAffordance:(BOOL)arg1;
-(NSString *)text;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1;
-(void)setCacheType:(unsigned long long)arg1;
-(unsigned long long)cacheType;
-(unsigned long long)resultType;
-(NSString *)semantic;

@end

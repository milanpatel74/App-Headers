/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSArray, NSSet;

@interface CountryInfo : NSObject {

	NSMutableSet* _searchTokens;
	NSString* _iso;
	NSString* _name;
	NSString* _localizedName;
	NSString* _cc;
	NSArray* _mcc;
	NSArray* _lengths;
	NSArray* _trims;
	NSString* _regex;
	NSArray* _formats;

}

@property (nonatomic,retain) NSString * iso;                        //@synthesize iso=_iso - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * cc;                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSArray * mcc;                         //@synthesize mcc=_mcc - In the implementation block
@property (nonatomic,retain) NSArray * lengths;                     //@synthesize lengths=_lengths - In the implementation block
@property (nonatomic,retain) NSArray * trims;                       //@synthesize trims=_trims - In the implementation block
@property (nonatomic,retain) NSString * regex;                      //@synthesize regex=_regex - In the implementation block
@property (nonatomic,retain) NSArray * formats;                     //@synthesize formats=_formats - In the implementation block
@property (nonatomic,readonly) NSSet * searchTokens; 
-(NSArray *)trims;
-(NSArray *)lengths;
-(NSSet *)searchTokens;
-(NSArray *)mcc;
-(void)setMcc:(NSArray *)arg1 ;
-(NSString *)iso;
-(void)setIso:(NSString *)arg1 ;
-(void)setLengths:(NSArray *)arg1 ;
-(void)setTrims:(NSArray *)arg1 ;
-(void)setFormats:(NSArray *)arg1 ;
-(NSString *)cc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedName;
-(NSArray *)formats;
-(void)setCc:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setRegex:(NSString *)arg1 ;
-(NSString *)regex;
@end

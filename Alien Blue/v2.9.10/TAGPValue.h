/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TAGPBGeneratedMessage.h>

@class NSString, TAGPBMutableArray;

@interface TAGPValue : TAGPBGeneratedMessage

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasString; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) BOOL hasListItemArray; 
@property (nonatomic,retain) TAGPBMutableArray * listItemArray; 
@property (assign,nonatomic) BOOL hasMapKeyArray; 
@property (nonatomic,retain) TAGPBMutableArray * mapKeyArray; 
@property (assign,nonatomic) BOOL hasMapValueArray; 
@property (nonatomic,retain) TAGPBMutableArray * mapValueArray; 
@property (assign,nonatomic) BOOL hasMacroReference; 
@property (nonatomic,retain) NSString * macroReference; 
@property (assign,nonatomic) BOOL hasFunctionId; 
@property (nonatomic,retain) NSString * functionId; 
@property (assign,nonatomic) BOOL hasInteger; 
@property (assign,nonatomic) long long integer; 
@property (assign,nonatomic) BOOL hasBoolean; 
@property (assign,nonatomic) BOOL boolean; 
@property (assign,nonatomic) BOOL hasTemplateTokenArray; 
@property (nonatomic,retain) TAGPBMutableArray * templateTokenArray; 
@property (assign,nonatomic) BOOL hasTagReference; 
@property (nonatomic,retain) NSString * tagReference; 
@property (assign,nonatomic) BOOL hasEscapingArray; 
@property (nonatomic,retain) TAGPBMutableArray * escapingArray; 
@property (assign,nonatomic) BOOL hasContainsReferences; 
@property (assign,nonatomic) BOOL containsReferences; 
+(id)descriptor;
-(unsigned long long)hash;
@end

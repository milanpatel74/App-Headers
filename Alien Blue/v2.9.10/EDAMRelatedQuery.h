/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, EDAMNoteFilter;

@interface EDAMRelatedQuery : NSObject <NSCoding> {

	NSString* __noteGuid;
	NSString* __plainText;
	EDAMNoteFilter* __filter;
	NSString* __referenceUri;
	BOOL __noteGuid_isset;
	BOOL __plainText_isset;
	BOOL __filter_isset;
	BOOL __referenceUri_isset;

}

@property (setter=setNoteGuid:,getter=noteGuid,nonatomic,retain) NSString * noteGuid; 
@property (setter=setPlainText:,getter=plainText,nonatomic,retain) NSString * plainText; 
@property (setter=setFilter:,getter=filter,nonatomic,retain) EDAMNoteFilter * filter; 
@property (setter=setReferenceUri:,getter=referenceUri,nonatomic,retain) NSString * referenceUri; 
-(void)read:(id)arg1 ;
-(void)setNoteGuid:(NSString *)arg1 ;
-(void)setPlainText:(NSString *)arg1 ;
-(void)setReferenceUri:(NSString *)arg1 ;
-(id)initWithNoteGuid:(id)arg1 plainText:(id)arg2 filter:(id)arg3 referenceUri:(id)arg4 ;
-(NSString *)noteGuid;
-(BOOL)noteGuidIsSet;
-(void)unsetNoteGuid;
-(BOOL)plainTextIsSet;
-(void)unsetPlainText;
-(BOOL)filterIsSet;
-(void)unsetFilter;
-(NSString *)referenceUri;
-(BOOL)referenceUriIsSet;
-(void)unsetReferenceUri;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(EDAMNoteFilter *)filter;
-(void)write:(id)arg1 ;
-(NSString *)plainText;
@end

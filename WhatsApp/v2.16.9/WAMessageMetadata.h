/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSURL, NSSet;

@interface WAMessageMetadata : NSObject <NSSecureCoding> {

	unsigned long long _type;
	NSData* _imageData;
	NSString* _matchedText;
	NSString* _title;
	NSString* _snippet;
	NSURL* _originalURL;
	NSURL* _canonicalURL;
	NSSet* _mentions;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * imageData;                       //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * matchedText;                   //@synthesize matchedText=_matchedText - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * snippet;                       //@synthesize snippet=_snippet - In the implementation block
@property (nonatomic,copy) NSURL * originalURL;                      //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy) NSURL * canonicalURL;                     //@synthesize canonicalURL=_canonicalURL - In the implementation block
@property (nonatomic,copy) NSSet * mentions;                         //@synthesize mentions=_mentions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMatchedText:(NSString *)arg1 ;
-(void)setCanonicalURL:(NSURL *)arg1 ;
-(NSURL *)canonicalURL;
-(NSString *)matchedText;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(id)initWithWebPageMetadata:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)type;
-(NSString *)title;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSURL *)originalURL;
-(void)setImageData:(NSData *)arg1 ;
-(void)setSnippet:(NSString *)arg1 ;
-(NSString *)snippet;
-(void)setMentions:(NSSet *)arg1 ;
-(NSSet *)mentions;
-(NSData *)imageData;
@end

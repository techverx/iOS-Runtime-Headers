/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDate, NSMutableDictionary, NSData, NSArray, NSLock, NSDictionary, NSString, NSURL, SSItemImageCollection, NSNumber;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
    int _keyStyle;
    NSLock *_lock;
}

@property unsigned long long artistIdentifier;
@property(copy) NSString * artistName;
@property(retain) NSURL * fullSizeImageURL;
@property(retain) NSString * genre;
@property unsigned long long genreIdentifier;
@property unsigned long long itemIdentifier;
@property(retain) NSString * kind;
@property(copy) NSString * longDescription;
@property(retain) NSDate * releaseDate;
@property(retain) NSNumber * releaseYear;
@property(copy) NSString * shortDescription;
@property(retain) NSString * subtitle;
@property(retain) NSString * title;
@property(retain) NSString * transactionIdentifier;
@property(readonly) SSItemImageCollection * thumbnailImageCollection;
@property(retain) NSString * thumbnailNewsstandBindingEdge;
@property(retain) NSString * thumbnailNewsstandBindingType;
@property(retain) NSURL * thumbnailImageURL;
@property(readonly) NSDictionary * primaryAssetDictionary;
@property int keyStyle;
@property(getter=isAutomaticDownload) BOOL automaticDownload;
@property(retain) NSURL * cancelDownloadURL;
@property(retain) NSString * copyright;
@property(retain) NSDictionary * dictionary;
@property(retain) NSString * downloadKey;
@property(retain) NSData * epubRightsData;
@property(retain) NSString * fileExtension;
@property(readonly) NSArray * MD5HashStrings;
@property(readonly) NSNumber * numberOfBytesToHash;
@property unsigned long long preOrderIdentifier;
@property(retain) NSURL * primaryAssetURL;
@property(copy) NSString * preferredAssetFlavor;
@property(copy) NSURL * transitMapDataURL;
@property(copy) NSString * redownloadActionParameters;
@property(getter=isRedownloadDownload) BOOL redownloadDownload;
@property(retain) NSString * releaseDateString;
@property(copy) id requiredDeviceCapabilities;
@property(getter=isContentRestricted,readonly) BOOL contentRestricted;
@property BOOL shouldDownloadAutomatically;
@property(retain) NSString * sortArtistName;
@property(retain) NSString * sortCollectionName;
@property(retain) NSString * sortTitle;
@property(retain) NSArray * sinfs;


- (void)setKind:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (id)purchaseDate;
- (void)setArtistName:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (id)artistName;
- (void)setSinfs:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)durationInMilliseconds;
- (BOOL)isContentRestricted;
- (id)thumbnailImageURL;
- (void)setReleaseDate:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (id)collectionName;
- (id)releaseDate;
- (BOOL)isExplicitContent;
- (void)setThumbnailImageURL:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (void)setCopyright:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (id)copyright;
- (unsigned long long)itemIdentifier;
- (id)valueForMetadataKey:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (id)sinfs;
- (BOOL)isRental;
- (id)genre;
- (id)bundleIdentifier;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (id)seasonNumber;
- (id)transitMapDataURL;
- (BOOL)shouldDownloadAutomatically;
- (void)setTransitMapDataURL:(id)arg1;
- (void)setShouldDownloadAutomatically:(BOOL)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setRedownloadDownload:(BOOL)arg1;
- (void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2;
- (void)setKeyStyle:(int)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setEpubRightsData:(id)arg1;
- (id)requiredDeviceCapabilities;
- (id)releaseDateString;
- (id)primaryAssetURL;
- (id)preferredAssetFlavor;
- (id)numberOfBytesToHash;
- (id)MD5HashStrings;
- (BOOL)isRedownloadDownload;
- (id)epubRightsData;
- (id)copyWritableMetadata;
- (id)videoDetailsDictionary;
- (id)sortTitle;
- (id)sortCollectionName;
- (id)sortArtistName;
- (void)setSortTitle:(id)arg1;
- (void)setSortCollectionName:(id)arg1;
- (void)setSortArtistName:(id)arg1;
- (void)setSagaIdentifier:(unsigned long long)arg1;
- (unsigned long long)sagaIdentifier;
- (id)primaryAssetDictionary;
- (id)fullSizeImageURL;
- (id)thumbnailImageCollection;
- (void)setPreferredAssetFlavor:(id)arg1;
- (void)setSample:(BOOL)arg1;
- (void)setAutomaticDownload:(BOOL)arg1;
- (void)setComposerIdentifier:(unsigned long long)arg1;
- (void)setViewStoreItemURL:(id)arg1;
- (void)setRedownloadActionParameters:(id)arg1;
- (void)setLongSeasonDescription:(id)arg1;
- (void)setCloudIdentifier:(id)arg1;
- (void)setCancelDownloadURL:(id)arg1;
- (void)_setValue:(id)arg1 forTopLevelKey:(id)arg2;
- (id)_newDateFormatter;
- (id)_valueForFirstAvailableTopLevelKey:(id)arg1;
- (unsigned long long)composerIdentifier;
- (BOOL)isSample;
- (BOOL)isAutomaticDownload;
- (BOOL)artworkIsPrerendered;
- (id)viewStoreItemURL;
- (id)thumbnailNewsstandBindingType;
- (id)thumbnailNewsstandBindingEdge;
- (id)redownloadActionParameters;
- (id)cancelDownloadURL;
- (id)transactionIdentifier;
- (id)releaseYear;
- (id)podcastType;
- (id)longSeasonDescription;
- (id)downloadKey;
- (id)documentTargetIdentifier;
- (id)cloudIdentifier;
- (id)_thumbnailArtworkImage;
- (id)_newImageCollectionWithURLString:(id)arg1;
- (void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2;
- (int)keyStyle;
- (id)_releaseDateValue;
- (id)_dateValueForValue:(id)arg1;
- (id)_assetDictionary;
- (id)_urlValueForValue:(id)arg1;
- (id)_stringValueForValue:(id)arg1;
- (id)valueForFirstAvailableKey:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setRental:(BOOL)arg1;
- (void)setDownloadKey:(id)arg1;
- (void)setPrimaryAssetURL:(id)arg1;
- (void)setPodcastFeedURL:(id)arg1;
- (id)podcastFeedURL;
- (void)setPodcastType:(id)arg1;
- (void)setReleaseYear:(id)arg1;
- (void)setThumbnailNewsstandBindingType:(id)arg1;
- (void)setThumbnailNewsstandBindingEdge:(id)arg1;
- (void)setArtworkIsPrerendered:(BOOL)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setDurationInMilliseconds:(id)arg1;
- (void)setExplicitContent:(BOOL)arg1;
- (void)setVideoDetailsDictionary:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (id)seriesName;
- (void)setSeasonNumber:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (id)podcastEpisodeGUID;
- (void)setNumberOfItemsInCollection:(id)arg1;
- (id)numberOfItemsInCollection;
- (void)setNumberOfCollectionsInCollectionGroup:(id)arg1;
- (id)numberOfCollectionsInCollectionGroup;
- (void)setNetworkName:(id)arg1;
- (id)networkName;
- (void)setLongDescription:(id)arg1;
- (id)longDescription;
- (void)setIndexInCollection:(id)arg1;
- (id)indexInCollection;
- (void)setGenreIdentifier:(unsigned long long)arg1;
- (unsigned long long)genreIdentifier;
- (void)setGenre:(id)arg1;
- (void)setEpisodeSortIdentifier:(id)arg1;
- (id)episodeSortIdentifier;
- (void)setEpisodeIdentifier:(id)arg1;
- (id)episodeIdentifier;
- (void)setComposerName:(id)arg1;
- (id)composerName;
- (void)setCompilation:(BOOL)arg1;
- (BOOL)isCompilation;
- (void)setCollectionIndexInCollectionGroup:(id)arg1;
- (id)collectionIndexInCollectionGroup;
- (void)setCollectionIdentifier:(unsigned long long)arg1;
- (unsigned long long)collectionIdentifier;
- (void)setCollectionArtistName:(id)arg1;
- (id)collectionArtistName;
- (void)setArtistIdentifier:(unsigned long long)arg1;
- (unsigned long long)artistIdentifier;
- (void)setPreOrderIdentifier:(unsigned long long)arg1;
- (unsigned long long)preOrderIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setValuesFromDownload:(id)arg1;
- (id)newDownloadProperties;
- (id)kind;
- (id)shortDescription;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)title;
- (id)applicationIdentifier;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)fileExtension;
- (void)setShortDescription:(id)arg1;
- (id)initWithKind:(id)arg1;

@end

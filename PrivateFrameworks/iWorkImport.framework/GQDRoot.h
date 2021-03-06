/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRoot : NSObject  {
    struct __CFDictionary { } *mUidToObjectMap;
    BOOL mAppBundleColorMapLoaded;
    struct __CFDictionary { } *mAppBundleResourceToColorMap;
    BOOL mAppBundleResourcesUrlInitialized;
    struct __CFURL { } *mAppBundleResourcesUrl;
    int mAppBundleVersion;
    unsigned long long mDocVersion;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (void)dealloc;
- (id)init;
- (BOOL)readDocumentVersion:(struct _xmlTextReader { }*)arg1;
- (BOOL)includeStyleWithIdentifier:(const char *)arg1 parentIdentifier:(const char *)arg2 uid:(const char *)arg3;
- (Class)classForName:(const char *)arg1;
- (unsigned int)documentReleaseVersion;
- (BOOL)readDocumentVersion:(struct _xmlTextReader { }*)arg1 isTooNew:(BOOL*)arg2;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2 fileExists:(BOOL*)arg3;
- (void)initializeAppBundleResourcesUrl;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (id)colorForMissingAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (BOOL)appBundleCanProcessCurrentDocVersion;
- (struct __CFURL { }*)appBundleResourcesUrl;
- (void)loadAppBundleResourceToColorMap;
- (void)forgetAboutObject:(id)arg1 withXmlUid:(const char *)arg2;
- (BOOL)addObject:(id)arg1 withOwnedXmlUid:(const char *)arg2;
- (id)objectWithXmlUid:(const char *)arg1;
- (const char *)addIdentifiedObject:(id)arg1 fromCurrentNode:(struct _xmlTextReader { }*)arg2;
- (id)uuid;

@end

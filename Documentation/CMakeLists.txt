## CMakeLists.txt                                       -*- CMake -*-
##
## Copyright (C) 2006-2017 Christian Schenk
## 
## This file is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published
## by the Free Software Foundation; either version 2, or (at your
## option) any later version.
## 
## This file is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with this file; if not, write to the Free Software
## Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
## USA.

include(component.cmake)

set(MIKTEX_CURRENT_FOLDER "Documentation")

set(PROMPT "&gt; ")
set(PROMPTUNX "&#36; ")
set(PROMPTWIN "C:\&gt; ")

if(MIKTEX_UNIX_ALIKE)
  set(COMMONINSTALL "/usr/local/share/miktex-texmf")
  set(USERDATA "~/.miktex/texmfs/data")
  set(USERINSTALL "~/.miktex/texmfs/install")
  set(EXESUFFIX "")
else()
  set(COMMONINSTALL "C:\\Program Files\\MiKTeX ${MIKTEX_MAJOR_MINOR_STR}")
  set(USERDATA "&#37;LOCALAPPDATA&#37;\\MiKTeX\\${MIKTEX_MAJOR_MINOR_STR}")
  set(USERINSTALL "&#37;LOCALAPPDATA&#37;\\Programs\\MiKTeX ${MIKTEX_MAJOR_MINOR_STR}")
  set(EXESUFFIX ".exe")
endif()

configure_file(
  entities.ent.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
)

set(screenshots_png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/autoinstall.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/browselocaltexmf.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/localtexmf.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-general.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-languages.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-mark-package.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-packages.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-roots.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-roots2.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-roots3.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mo-search-package.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mpm-context.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/mpm.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/updatewiz-download-type.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/updatewiz-packagelist.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/updatewiz-progress.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/updatewiz-remote-repository.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/updatewiz-source.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/yap-inversesearchoptions.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/yap-rotating.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/yap-ruler.png
  ${CMAKE_CURRENT_SOURCE_DIR}/Images/yap-texeditor.png
)

set(envvar_xml_files
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/BIBINPUTS.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/BSTINPUTS.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/MFINPUTS.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/MIKTEX_EDITOR.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/MIKTEX_REPOSITORY.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/MIKTEX_TRACE.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/MPINPUTS.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/TEXINPUTS.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/EnvVars/TFMFONTS.xml
)

set(options_xml_files
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/admin.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/alias.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/auxdirectory.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/bistacksize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/bufsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/cstyleerrors.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/disable8bitchars.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/disableinstaller.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/disablepipes.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/disablewriteeighteen.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/dontparsefirstline.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enable8bitchars.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enableenctex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enableetex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enableinstaller.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enablemltex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enablepipes.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/enablewriteeighteen.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/errorline.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/extramembot.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/extramemtop.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/fontmax.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/fontmemsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/halferrorline.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/haltonerror.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/hashextra.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/help.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/hhelp.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/includedirectory.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/initialize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/interaction.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/jobname.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/jobtime.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/ligtablesize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/listrepositories.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/mainmemory.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/maxinopen.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/maxprintline.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/maxstrings.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/maxwiggle.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/movesize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/nestsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/nocstyleerrors.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/outputdirectory.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/paramsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/parsefirstline.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/pathsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/poolfree.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/poolsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/quiet.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/recorder.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/recordpackageusages.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/restrictwriteeighteen.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/savesize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/srcspecials.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/stacksize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/stringvacancies.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/synctex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/tcx.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/timestatistics.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/trace.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/trieopsize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/triesize.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/undump.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Options/version.xml
)

set(ref_xml_files
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/bibtex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/dvicopy.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/dvips.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/findtexmf.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/gftodvi.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/initexmf.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/luatex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/mf.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/miktexini.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/miktexsetup.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/mpm.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/mpost.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/mthelp.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/mtprint.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/pdftex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/pdftexcfg.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/setupwiz.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/tex.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/texify.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/updmapcfg.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Ref/xetex.xml
)

set(manual_xml_files
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/configuring.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/envvars.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/features.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/installing.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/intro.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/localguide.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/printing.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/tcxtables.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/texfeatures.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/texifying.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/Manual/tracestreams.xml
  ${CMAKE_CURRENT_SOURCE_DIR}/miktex.xml
  ${envvar_xml_files}
  ${options_xml_files}
  ${ref_xml_files}
)

set(manual_listings
  ${CMAKE_CURRENT_BINARY_DIR}/filetypes
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_CONFIG_DIR}/miktex-config.ini
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/mf.defaults
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/mfapp.defaults
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/mpost.defaults
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/omega.defaults
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/pdftex.defaults
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/texapp.defaults
  ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}/texmfapp.defaults
)

add_custom_command(
  OUTPUT
    ${CMAKE_CURRENT_BINARY_DIR}/filetypes
  COMMAND
    findtexmf --list-file-types > ${CMAKE_CURRENT_BINARY_DIR}/filetypes
  DEPENDS
    findtexmf
  VERBATIM
)

set(xslt_path "${CMAKE_CURRENT_BINARY_DIR}")
set(xslt_path "${xslt_path} ${CMAKE_CURRENT_BINARY_DIR}/Styles")
set(xslt_path "${xslt_path} ${CMAKE_CURRENT_SOURCE_DIR}")
set(xslt_path "${xslt_path} ${CMAKE_CURRENT_SOURCE_DIR}/Styles")
set(xslt_path "${xslt_path} ${CMAKE_BINARY_DIR}/${MIKTEX_REL_CONFIG_DIR}")
set(xslt_path "${xslt_path} ${CMAKE_BINARY_DIR}/${MIKTEX_REL_DEFAULTS_DIR}")

if(WITH_MIKTEX_DOC)
  install(
    FILES
      Styles/miktexman.css
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}
  )
  install(
    DIRECTORY
      Images/
      ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}/Images
    PATTERN "callouts" EXCLUDE
    PATTERN "colorsvg" EXCLUDE
  )
endif()

###############################################################################
## manual

## help file

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.chm
    COMMAND
      ${CMAKE_COMMAND} -E
        remove_directory ${CMAKE_CURRENT_BINARY_DIR}/scratch
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/scratch/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/scratch/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_HELP_STYLES} ${CMAKE_CURRENT_BINARY_DIR}/scratch
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --stringparam base.dir scratch/
          --stringparam chunk.fast 1
          --stringparam manifest.in.base.dir 1
          htmlhelp.xsl
          miktex.xml
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_CORE_CONTEXT_HELP} ${CMAKE_CURRENT_BINARY_DIR}/scratch/context.h
    COMMAND
      ${CMAKE_COMMAND} -E
        chdir ${CMAKE_CURRENT_BINARY_DIR}/scratch ${HHC_EXECUTABLE_WRAPPER} htmlhelp
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${CMAKE_CURRENT_BINARY_DIR}/scratch/htmlhelp.chm ${CMAKE_CURRENT_BINARY_DIR}/miktex.chm
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${MIKTEX_CORE_CONTEXT_HELP}
      ${MIKTEX_DOCBOOK_HTMLHELP}
      ${manual_listings}
      ${manual_xml_files}
      ${MIKTEX_HELP_STYLES}
      ${screenshots_png}
    VERBATIM
  )
  install(
    FILES
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.chm
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}
  )
endif()

## chunked html

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/html/manual/index.html
    COMMAND
      ${CMAKE_COMMAND} -E
        remove_directory ${CMAKE_CURRENT_BINARY_DIR}/html/manual
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/html/manual/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/html/manual/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_MANUAL_STYLES} ${CMAKE_CURRENT_BINARY_DIR}/html/manual
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --stringparam base.dir html/manual/
          --stringparam chunk.fast 1
          htmlchunk.xsl
          miktex.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${MIKTEX_DOCBOOK_CHUNKED_HTML}
      ${manual_listings}
      ${manual_xml_files}
      ${MIKTEX_HELP_STYLES}
      ${screenshots_png}
    VERBATIM
  )
  install(
    DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}/html/manual/
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}/manual
  )
endif()

## pdf

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.fo
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --output ${CMAKE_CURRENT_BINARY_DIR}/miktex.fo
          --stringparam fop1.extensions 1
          --stringparam img.src.path scratch/
          fo.xsl
          miktex.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${manual_listings}
      ${manual_xml_files}
      ${MIKTEX_DOCBOOK_FO}
    VERBATIM
  )
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.pdf
    COMMAND
      ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_BINARY_DIR}/scratch
    COMMAND
      ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/scratch/Manual/Images
    COMMAND
      ${CMAKE_COMMAND} -E chdir ${CMAKE_CURRENT_BINARY_DIR}/scratch
        ${FOP_EXECUTABLE}
          -fo ${CMAKE_CURRENT_BINARY_DIR}/miktex.fo
          -pdf ${CMAKE_CURRENT_BINARY_DIR}/miktex.pdf
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.fo
      ${screenshots_png}
    VERBATIM
  )
  install(
    FILES
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.pdf
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}
  )
endif()

###############################################################################
## packaging guide

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/html/packaging/index.html
    COMMAND
      ${CMAKE_COMMAND} -E
        remove_directory ${CMAKE_CURRENT_BINARY_DIR}/html/packaging
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/html/packaging/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/html/packaging/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_MANUAL_STYLES} ${CMAKE_CURRENT_BINARY_DIR}/html/packaging
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --stringparam base.dir html/packaging/
          --output ${CMAKE_CURRENT_BINARY_DIR}/html/packaging/index.html
          html.xsl
          packaging.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${CMAKE_CURRENT_SOURCE_DIR}/packaging.xml
      ${MIKTEX_DOCBOOK_HTML}
      ${MIKTEX_HELP_STYLES}
      ${screenshots_png}
    VERBATIM
  )
  install(
    DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}/html/packaging/
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}/packaging/
    PATTERN ".svn" EXCLUDE
  )
endif()

###############################################################################
## release notes

## html

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes/index.html
    COMMAND
      ${CMAKE_COMMAND} -E
        remove_directory ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_MANUAL_STYLES} ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --stringparam base.dir html/relnotes/
          --output ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes/index.html
          html.xsl
          relnotes.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${CMAKE_CURRENT_SOURCE_DIR}/relnotes.xml
      ${MIKTEX_DOCBOOK_HTML}
      ${MIKTEX_HELP_STYLES}
      ${screenshots_png}
    VERBATIM
  )
  install(
    DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes/
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}/relnotes/
    PATTERN ".svn" EXCLUDE
  )
endif()

###############################################################################
## license

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/license.html
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --output ${CMAKE_CURRENT_BINARY_DIR}/license.html
          html.xsl
          license.xml
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${CMAKE_CURRENT_SOURCE_DIR}/license.xml
      ${MIKTEX_DOCBOOK_HTML}
    VERBATIM
  )
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/LICENSE.txt
    COMMAND
      ${PANDOC_EXECUTABLE}
        -f html
        -t plain
        -o ${CMAKE_CURRENT_BINARY_DIR}/LICENSE.txt
        ${CMAKE_CURRENT_BINARY_DIR}/license.html
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/license.html
    VERBATIM
  )
  install(
    FILES
      ${CMAKE_CURRENT_BINARY_DIR}/license.html
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}
  )
endif()

###############################################################################
## faq

## help file

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/faq.chm
    COMMAND
      ${CMAKE_COMMAND} -E
        remove_directory ${CMAKE_CURRENT_BINARY_DIR}/scratch
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/scratch/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/scratch/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_HELP_STYLES} ${CMAKE_CURRENT_BINARY_DIR}/scratch
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --stringparam base.dir scratch/
          --stringparam chunk.fast 1
          --stringparam manifest.in.base.dir 1
          htmlhelp.xsl
          faq.xml
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_CORE_CONTEXT_HELP} ${CMAKE_CURRENT_BINARY_DIR}/scratch/context.h
    COMMAND
      ${CMAKE_COMMAND} -E chdir ${CMAKE_CURRENT_BINARY_DIR}/scratch
        ${HHC_EXECUTABLE_WRAPPER} htmlhelp
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${CMAKE_CURRENT_BINARY_DIR}/scratch/htmlhelp.chm ${CMAKE_CURRENT_BINARY_DIR}/faq.chm
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${MIKTEX_DOCBOOK_HTMLHELP}
      ${manual_xml_files}
      ${MIKTEX_HELP_STYLES}
    VERBATIM
  )
  install(
    FILES
      ${CMAKE_CURRENT_BINARY_DIR}/faq.chm
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}
  )
endif()

## chunked html

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/html/faq/index.html
    COMMAND
      ${CMAKE_COMMAND} -E
        remove_directory ${CMAKE_CURRENT_BINARY_DIR}/html/faq
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_SOURCE_DIR}/${MIKTEX_REL_DOCBOOK_XSL_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/html/faq/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/Images ${CMAKE_CURRENT_BINARY_DIR}/html/faq/images
    COMMAND
      ${CMAKE_COMMAND} -E
        copy ${MIKTEX_MANUAL_STYLES} ${CMAKE_CURRENT_BINARY_DIR}/html/faq
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --stringparam base.dir html/faq/
          --stringparam chunk.fast 1
          htmlchunk.xsl
          faq.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${MIKTEX_DOCBOOK_CHUNKED_HTML}
      ${MIKTEX_HELP_STYLES}
      ${screenshots_png}
      faq.xml
    VERBATIM
  ) 
  install(
    DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}/html/faq/
    DESTINATION
      ${MIKTEX_DOC_DESTINATION_DIR}/faq/
    PATTERN ".svn" EXCLUDE
  )
endif()

## html

if(WITH_MIKTEX_DOC)
  add_custom_command(
    OUTPUT
      ${CMAKE_CURRENT_BINARY_DIR}/html/faq/faq.html
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          --output ${CMAKE_CURRENT_BINARY_DIR}/html/faq/faq.html
          --stringparam base.dir html/faq/
          html.xsl
          faq.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/html/faq/index.html
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${MIKTEX_DOCBOOK_HTML}
      ${MIKTEX_HELP_STYLES}
      ${screenshots_png}
      faq.xml
    VERBATIM
  ) 
endif()

###############################################################################
## man pages

set(generated_man1_pages
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}bibtex.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}dvicopy.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}dvips.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}gftodvi.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}luatex.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}mf.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}mpost.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}pdftex.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}tex.1
  ${CMAKE_CURRENT_BINARY_DIR}/${MIKTEX_PREFIX}xetex.1
  ${CMAKE_CURRENT_BINARY_DIR}/findtexmf.1
  ${CMAKE_CURRENT_BINARY_DIR}/initexmf.1
  ${CMAKE_CURRENT_BINARY_DIR}/mpm.1
  ${CMAKE_CURRENT_BINARY_DIR}/mthelp.1
  ${CMAKE_CURRENT_BINARY_DIR}/texify.1
)

set(generated_man5_pages
  ${CMAKE_CURRENT_BINARY_DIR}/updmap.cfg.5
  ${CMAKE_CURRENT_BINARY_DIR}/pdftex.cfg.5
)

set(generated_man_pages
  ${generated_man1_pages}
  ${generated_man5_pages}
)

if(WITH_MAN_PAGES)
  add_custom_command(
    OUTPUT
      ${generated_man_pages}
    COMMAND
      ${CMAKE_COMMAND} -E env "XML_CATALOG_FILES=${MIKTEX_XML_CATALOG_FILE}"
        ${XSLTPROC_EXECUTABLE}
          --xinclude
          --path "${xslt_path}"
          manpages.xsl
          miktex.xml
    WORKING_DIRECTORY
      ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/entities.ent
      ${CMAKE_CURRENT_BINARY_DIR}/filetypes
      ${CMAKE_CURRENT_SOURCE_DIR}/Styles/manpages.xsl
      ${CMAKE_CURRENT_SOURCE_DIR}/miktex.xml
      ${envvar_xml_files}
      ${options_xml_files}
      ${ref_xml_files}
    VERBATIM
  )
  install(
    FILES
      ${generated_man1_pages}
    DESTINATION
      ${MIKTEX_MAN_DESTINATION_DIR}/man1
  )
  install(
    FILES
      ${generated_man5_pages}
    DESTINATION
      ${MIKTEX_MAN_DESTINATION_DIR}/man5
  )
endif()

###############################################################################
## local guide (required LaTeX file)

if(WITH_MIKTEX_DOC)
  install(
    FILES
      local.txt
    DESTINATION
      ${MIKTEX_DIST_DIR}/doc/latex/00LocalGuide
  )
endif()

###############################################################################

if(WITH_MIKTEX_DOC)
  add_custom_target(gen-LICENSE-txt
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/LICENSE.txt
  )
endif()

###############################################################################
## ALL targets

if(WITH_MIKTEX_DOC)
  add_custom_target(gen-html ALL
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/html/faq/faq.html
      ${CMAKE_CURRENT_BINARY_DIR}/html/faq/index.html
      ${CMAKE_CURRENT_BINARY_DIR}/html/manual/index.html
      ${CMAKE_CURRENT_BINARY_DIR}/html/packaging/index.html
      ${CMAKE_CURRENT_BINARY_DIR}/html/relnotes/index.html
      ${CMAKE_CURRENT_BINARY_DIR}/license.html
  )
  set_property(TARGET gen-html PROPERTY FOLDER ${MIKTEX_CURRENT_FOLDER})
  add_custom_target(gen-pdf ALL
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.pdf
  )
  set_property(TARGET gen-pdf PROPERTY FOLDER ${MIKTEX_CURRENT_FOLDER})
  add_custom_target(gen-miktex-help ALL
    DEPENDS
      ${CMAKE_CURRENT_BINARY_DIR}/faq.chm
      ${CMAKE_CURRENT_BINARY_DIR}/miktex.chm
  )
  set_property(TARGET gen-miktex-help PROPERTY FOLDER ${MIKTEX_CURRENT_FOLDER})  
endif()

if(WITH_MAN_PAGES)
  add_custom_target(gen-man ALL
    DEPENDS
      ${generated_man_pages}
  )
  set_property(TARGET gen-man PROPERTY FOLDER ${MIKTEX_CURRENT_FOLDER})  
endif()

/* IL2CPP: Rotatelab.FX.OpenGLMediaTekRenderEffectCrashFix$$IsOpenGLMediaTekDevice
bool Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__IsOpenGLMediaTekDevice (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.OpenGLMediaTekRenderEffectCrashFix$$IsOpenGLMediaTekDevice
   bool Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__IsOpenGLMediaTekDevice (const MethodInfo*
   method); */

undefined4 Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__IsOpenGLMediaTekDevice_10fd974(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_0110dcd4 + 0x110d984);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dcd8 + 0x110d998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dcdc + 0x110d9a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dce0 + 0x110d9b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dce4 + 0x110d9bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dce8 + 0x110d9c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dcec + 0x110d9d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dcf0 + 0x110d9e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110dcf4 + 0x110d9ec));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = UnityEngine_SystemInfo__get_graphicsDeviceType_360f270(0);
  if (iVar1 != 0x15) {
    uVar3 = UnityEngine_SystemInfo__get_graphicsDeviceName_360efd0(0);
    if (*(int *)(**(int **)(_UNK_0110dcfc + 0x110da20) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Extensions__ContainsIgnoreCase_fc1aa0
                      (uVar3,**(undefined4 **)(_UNK_0110dd00 + 0x110da3c),0);
    uVar3 = 1;
    if (iVar1 == 0) {
      puVar4 = *(undefined4 **)(_UNK_0110dd08 + 0x110da60);
      iVar1 = System_IO_File__Exists_2b27c30(*puVar4,0);
      if (iVar1 != 0) {
        iVar1 = System_IO_File__ReadAllText_2b2e26c(*puVar4,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = System_String__Contains_2a104b8
                          (iVar1,**(undefined4 **)(_UNK_0110dd0c + 0x110da98),0);
        if (iVar1 != 0) {
          return 1;
        }
      }
      iVar1 = System_IO_File__Exists_2b27c30(**(undefined4 **)(_UNK_0110dd18 + 0x110dabc),0);
      uVar3 = 1;
      if (((iVar1 == 0) &&
          (iVar1 = System_IO_File__Exists_2b27c30(**(undefined4 **)(_UNK_0110dd1c + 0x110dadc),0),
          iVar1 == 0)) &&
         (iVar1 = System_IO_File__Exists_2b27c30(**(undefined4 **)(_UNK_0110dd20 + 0x110daf8),0),
         iVar1 == 0)) {
        uVar3 = System_IO_File__Exists_2b27c30(**(undefined4 **)(_UNK_0110dd24 + 0x110db14),0);
      }
    }
  }
  return uVar3;
}


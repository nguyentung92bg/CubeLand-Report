/* IL2CPP: Rotatelab.Scripts.AppUpdateManager$$GetVersion
System_Version_o* Rotatelab_Scripts_AppUpdateManager__GetVersion (Rotatelab_Scripts_AppUpdateManager_o* __this, System_String_o* version, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AppUpdateManager$$GetVersion
   System_Version_o* Rotatelab_Scripts_AppUpdateManager__GetVersion
   (Rotatelab_Scripts_AppUpdateManager_o* __this, System_String_o* version, const MethodInfo*
   method); */

undefined4 Rotatelab_Scripts_AppUpdateManager__GetVersion_105f06c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0106f120 + 0x106f080);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f124 + 0x106f094));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__IndexOf_2a10550(param_2,0x2e,0);
  if (iVar1 < 0) {
    uVar3 = System_Int32__Parse_2b6bda0(param_2,0);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106f12c + 0x106f100));
    System_Version___ctor_2b92efc(uVar2,uVar3,0,0);
  }
  else {
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106f128 + 0x106f0cc));
    System_Version___ctor_2b92fd4(uVar2,param_2,0);
  }
  return uVar2;
}


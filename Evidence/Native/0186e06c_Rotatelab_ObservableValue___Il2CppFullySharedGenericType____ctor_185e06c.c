/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType____ctor (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185E06C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0186e218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$.ctor
   void Rotatelab_ObservableValue___Il2CppFullySharedGenericType____ctor
   (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185E06C* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType____ctor_185e06c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char cStack_25;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_0186e25c + 0x186e084);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186e260 + 0x186e098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186e264 + 0x186e0a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186e268 + 0x186e0b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186e26c + 0x186e0bc));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  cStack_25 = '\0';
  System_Object___ctor_2bb93bc(param_1,0);
  piVar7 = *(int **)(_UNK_0186e270 + 0x186e0e8);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  cStack_25 = '\0';
  uStack_24 = **(undefined4 **)(iVar1 + 0x5c);
  System_Threading_Monitor__Enter_2bdfb90(uStack_24,&cStack_25,0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0186e274 + 0x186e154));
  System_WeakReference_object____ctor_1e46b68
            (uVar2,param_1,**(undefined4 **)(_UNK_0186e278 + 0x186e168));
  if (iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    piVar7 = *(int **)(_UNK_0186e27c + 0x186e1a0);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 != 0) {
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        puVar3 = (undefined4 *)(iVar6 + uVar5 * 4 + 0x10);
        *puVar3 = uVar2;
        thunk_FUN_00ec5080(puVar3,uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
      }
      if (cStack_25 != '\0') {
        System_Threading_Monitor__Exit_2be3444(uStack_24,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


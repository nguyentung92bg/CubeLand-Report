/* IL2CPP: Rotatelab.ObservableBool$$.ctor
void Rotatelab_ObservableBool___ctor (Rotatelab_ObservableBool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0186d7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.ObservableBool$$.ctor
   void Rotatelab_ObservableBool___ctor (Rotatelab_ObservableBool_o* __this, const MethodInfo*
   method); */

void Rotatelab_ObservableBool___ctor_fb30c4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  char cStack_25;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_00fc311c + 0xfc30dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3120 + 0xfc30f0));
    *pcVar5 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_00fc3124 + 0xfc310c);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0x7fffffff;
  pcVar5 = (char *)(_UNK_0186d804 + 0x186d62c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186d808 + 0x186d640),*puVar1);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186d80c + 0x186d64c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186d810 + 0x186d658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0186d814 + 0x186d664));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  cStack_25 = '\0';
  System_Object___ctor_2bb93bc(param_1,0);
  piVar7 = *(int **)(_UNK_0186d818 + 0x186d690);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  cStack_25 = '\0';
  uStack_24 = **(undefined4 **)(iVar2 + 0x5c);
  System_Threading_Monitor__Enter_2bdfb90(uStack_24,&cStack_25,0);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0186d81c + 0x186d6fc));
  System_WeakReference_object____ctor_1e46b68
            (uVar3,param_1,**(undefined4 **)(_UNK_0186d820 + 0x186d710));
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 8);
    uVar4 = *(uint *)(iVar2 + 0xc);
    piVar7 = *(int **)(_UNK_0186d824 + 0x186d748);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar6 != 0) {
      if (uVar4 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar4 + 1;
        puVar1 = (undefined4 *)(iVar6 + uVar4 * 4 + 0x10);
        *puVar1 = uVar3;
        thunk_FUN_00ec5080(puVar1,uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar2,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
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


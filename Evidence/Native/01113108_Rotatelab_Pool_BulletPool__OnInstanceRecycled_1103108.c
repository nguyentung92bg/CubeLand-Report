/* IL2CPP: Rotatelab.Pool.BulletPool$$OnInstanceRecycled
void Rotatelab_Pool_BulletPool__OnInstanceRecycled (Rotatelab_Pool_BulletPool_o* __this, Rotatelab_Scripts_BulletController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.BulletPool$$OnInstanceRecycled
   void Rotatelab_Pool_BulletPool__OnInstanceRecycled (Rotatelab_Pool_BulletPool_o* __this,
   Rotatelab_Scripts_BulletController_o* instance, const MethodInfo* method); */

uint Rotatelab_Pool_BulletPool__OnInstanceRecycled_1103108(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_011131a8 + 0x1113120);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011131ac + 0x1113134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011131b0 + 0x1113140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011131b4 + 0x111314c));
    *pcVar5 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceRecycled_1857d90
            (param_1,param_2,**(undefined4 **)(_UNK_011131b8 + 0x1113164));
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_011131bc + 0x1113178) + 0x74) == 0) {
    FUN_00ec3934();
    uVar3 = extraout_r3_00;
  }
  iVar2 = **(int **)(_UNK_011131c0 + 0x111319c);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4));
    uVar3 = extraout_r3_01;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      FUN_00efd7c4(iVar2);
      uVar3 = extraout_r3_02;
    }
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_Collections_Generic_List_object___IndexOf_267e86c
                    (iVar4,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),uVar3,unaff_r4,
                     unaff_r5,unaff_r6,unaff_lr);
  if (-1 < (int)uVar1) {
    if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__RemoveAtFast_object__14882cc
              (iVar4,uVar1,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc));
  }
  return ~uVar1 >> 0x1f;
}


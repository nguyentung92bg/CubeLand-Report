/* IL2CPP: Rotatelab.Pool.BulletPool$$OnInstanceFetched
void Rotatelab_Pool_BulletPool__OnInstanceFetched (Rotatelab_Pool_BulletPool_o* __this, Rotatelab_Scripts_BulletController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.BulletPool$$OnInstanceFetched
   void Rotatelab_Pool_BulletPool__OnInstanceFetched (Rotatelab_Pool_BulletPool_o* __this,
   Rotatelab_Scripts_BulletController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_BulletPool__OnInstanceFetched_110301c(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  
  pcVar6 = (char *)(_UNK_011130f4 + 0x1113034);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011130f8 + 0x1113048));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011130fc + 0x1113054));
    *pcVar6 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceFetched_1857d40
            (param_1,param_2,**(undefined4 **)(_UNK_01113100 + 0x111306c));
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar5 + 8);
  uVar8 = *(uint *)(iVar5 + 0xc);
  piVar4 = *(int **)(_UNK_01113104 + 0x11130a4);
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar8 + 1;
    puVar3 = (undefined4 *)(iVar7 + uVar8 * 4 + 0x10);
    *puVar3 = param_2;
  }
  else {
    uVar8 = *(uint *)(iVar5 + 0xc);
    System_Collections_Generic_List_object___EnsureCapacity_267e0f0
              (iVar5,uVar8 + 1,
               *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38) + 0x10
                                  ) + 0x60) + 0x3c));
    iVar7 = *(int *)(iVar5 + 8);
    *(uint *)(iVar5 + 0xc) = uVar8 + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    puVar3 = (undefined4 *)(iVar7 + uVar8 * 4 + 0x10);
    *puVar3 = param_2;
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


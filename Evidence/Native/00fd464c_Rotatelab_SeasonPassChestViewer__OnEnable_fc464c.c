/* IL2CPP: Rotatelab.SeasonPassChestViewer$$OnEnable
void Rotatelab_SeasonPassChestViewer__OnEnable (Rotatelab_SeasonPassChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassChestViewer$$OnEnable
   void Rotatelab_SeasonPassChestViewer__OnEnable (Rotatelab_SeasonPassChestViewer_o* __this, const
   MethodInfo* method); */

void Rotatelab_SeasonPassChestViewer__OnEnable_fc464c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00fd4728 + 0xfd4660);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd472c + 0xfd4674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4730 + 0xfd4680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4734 + 0xfd468c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4738 + 0xfd4698));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fd473c + 0xfd46ac);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x188);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd4740 + 0xfd46d0));
  System_Action_object__object____ctor_1f18fcc
            (uVar4,param_1,**(undefined4 **)(_UNK_00fd4744 + 0xfd46f0),0);
  uVar4 = Rotatelab_GameAction_object__object___op_Addition_23a4fa8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_00fd4748 + 0xfd4708));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x188);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* IL2CPP: Rotatelab.UI.PreGame$$Awake
void Rotatelab_UI_PreGame__Awake (Rotatelab_UI_PreGame_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreGame$$Awake
   void Rotatelab_UI_PreGame__Awake (Rotatelab_UI_PreGame_o* __this, const MethodInfo* method); */

void Rotatelab_UI_PreGame__Awake_112ca38(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0113cb14 + 0x113ca4c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cb18 + 0x113ca60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cb1c + 0x113ca6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cb20 + 0x113ca78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cb24 + 0x113ca84));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0113cb28 + 0x113ca98);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x17c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113cb2c + 0x113cabc));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_0113cb30 + 0x113cadc),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0113cb34 + 0x113caf4));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x17c);
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


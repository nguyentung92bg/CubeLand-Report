/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnLevelSucceededHandler
void Rotatelab_Scripts_ObjectShadowController__OnLevelSucceededHandler (Rotatelab_Scripts_ObjectShadowController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnLevelSucceededHandler
   void Rotatelab_Scripts_ObjectShadowController__OnLevelSucceededHandler
   (Rotatelab_Scripts_ObjectShadowController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_ObjectShadowController__OnLevelSucceededHandler_10302fc(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint in_fpscr;
  
  pcVar7 = (char *)(_UNK_010403ac + 0x1040314);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010403b0 + 0x1040328));
    *pcVar7 = '\x01';
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar7 = (char *)(_UNK_010403b4 + 0x1040350);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010403b8 + 0x1040364));
    *pcVar7 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_010403bc + 0x1040378) + 0x5c);
  iVar5 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar3,*puVar4,puVar4[1],puVar4[2],0x3f000000,0);
  uVar3 = **(undefined4 **)(_UNK_010403c0 + 0x104039c);
  cVar2 = '\0';
  if (iVar5 != 0) {
    cVar2 = *(char *)(iVar5 + 0x94);
  }
  if (iVar5 != 0 && cVar2 != '\0') {
    *(undefined4 *)(iVar5 + 0x74) = 9;
    iVar6 = DG_Tweening_Core_Easing_EaseManager__IsFlashEase_1186f58(9,0,uVar3);
    if (iVar6 != 0) {
      uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar5 + 0x7c) == _UNK_015ea038) << 0x1e;
      uVar3 = VectorSignedToFloat((int)*(float *)(iVar5 + 0x7c),(byte)(uVar1 >> 0x16) & 3);
      if (SUB41(uVar1 >> 0x1e,0)) {
        uVar3 = _UNK_015ea03c;
      }
      *(undefined4 *)(iVar5 + 0x7c) = uVar3;
    }
    *(undefined4 *)(iVar5 + 0x78) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x78),0);
  }
  return iVar5;
}

